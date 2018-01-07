#!/usr/bin/env python

import math

def is_prime(number):
    if number < 2:
        return False
    else:
        if number == 2:
            return True
        if number % 2 == 0:
            return False
        for current in range(3, int(math.sqrt(number)) + 1, 2):
            if number % current == 0:
                return False
        return True

def get_primes(number):
    while True:
        if is_prime(number):
            number = yield number
        number += 1

def print_successive_prime(iterations, base = 10):
    prime_generator = get_primes(base)
    prime_generator.send(None)
    for power in range(iterations):
        print(prime_generator.send(base ** power))


if __name__ == '__main__':
    iterations = 10
    print_successive_prime(iterations)
