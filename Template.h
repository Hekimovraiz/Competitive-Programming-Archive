#pragma once
#include <bits/stdc++.h>
using namespace std;

// ================= TYPE TRAITS =================

template <typename T>
using is_iterable = decltype(begin(declval<T>()));

template <typename T, typename = void>
struct is_iterable_trait : false_type
{
};

template <typename T>
struct is_iterable_trait<T, void_t<decltype(begin(declval<T>())), decltype(end(declval<T>()))>> : true_type
{
};

template <typename T>
constexpr bool is_iterable_v = is_iterable_trait<T>::value;

// ================= BASIC TYPES =================

void print_val(const string &x)
{
    cout << '"' << x << '"';
}

void print_val(const char *x)
{
    cout << '"' << x << '"';
}

template <typename T>
enable_if_t<is_arithmetic_v<T>, void>
print_val(const T &x)
{
    cout << x;
}

// ================= PAIR =================

template <typename A, typename B>
void print_val(const pair<A, B> &p)
{
    cout << "(";
    print_val(p.first);
    cout << ", ";
    print_val(p.second);
    cout << ")";
}

// ================= TUPLE =================

template <typename Tuple, size_t... I>
void print_tuple(const Tuple &t, index_sequence<I...>)
{
    cout << "(";
    size_t n = 0;
    ((cout << (n++ ? ", " : ""), print_val(get<I>(t))), ...);
    cout << ")";
}

template <typename... Args>
void print_val(const tuple<Args...> &t)
{
    print_tuple(t, index_sequence_for<Args...>{});
}

// ================= ITERABLE =================

template <typename T>
enable_if_t<is_iterable_v<T> && !is_same_v<decay_t<T>, string>, void>
print_val(const T &v)
{
    cout << "{";
    bool first = true;
    for (auto &x : v)
    {
        if (!first)
            cout << ", ";
        print_val(x);
        first = false;
    }
    cout << "}";
}

// ================= MAP (SPECIAL HANDLING) =================

template <typename K, typename V>
void print_val(const map<K, V> &m)
{
    cout << "{";
    bool first = true;
    for (auto &p : m)
    {
        if (!first)
            cout << ", ";
        print_val(p.first);
        cout << " : ";
        print_val(p.second);
        first = false;
    }
    cout << "}";
}

// ================= GENERIC FALLBACK =================

template <typename T>
enable_if_t<
    !is_iterable_v<T> &&
    !is_same_v<decay_t<T>, string> &&
    !is_arithmetic_v<T>,
void>
print_val(const T &x)
{
    cout << x;
}

// ================= DEBUG MACRO =================

#define check(...) debug_print(#__VA_ARGS__, __VA_ARGS__)

template <typename... Args>
void debug_print(const char *names, Args &&...args)
{
    const char *p = names;

    cout << "{";
    bool first_arg = true;

    auto print_one = [&](auto &&value)
    {
        string name;
        while (*p == ' ')
            p++;
        while (*p != ',' && *p != '\0')
            name += *p++;
        if (*p == ',')
            p++;

        if (!first_arg)
            cout << ", ";
        first_arg = false;

        cout << name << " = ";
        print_val(value);
    };

    (print_one(args), ...);
    cout << "}\n";
}