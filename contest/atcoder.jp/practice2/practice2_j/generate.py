#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
# usage: $ oj generate-input --hack-actual=./a.out --hack-expected=./naive 'python3 generate.py'
import random


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = random.randint(1, 10)  # TODO: edit here
    b = random.randint(1, 10)  # TODO: edit here
    e = [None for _ in range(b)]
    f = [None for _ in range(b)]
    g = [None for _ in range(b)]
    c = random.randint(1, 10)  # TODO: edit here
    d = random.randint(1, 10)  # TODO: edit here
    for i in range(b):
        e[i] = random.randint(1, 10)  # TODO: edit here
        f[i] = random.randint(1, 10)  # TODO: edit here
        g[i] = random.randint(1, 10)  # TODO: edit here
    print(a, b)
    print(c, end=' ')
    print(d, end=' ')
    for i in range(b):
        print(e[i], f[i], g[i])


if __name__ == "__main__":
    main()
