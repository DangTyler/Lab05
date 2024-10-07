import stringdata
import time

def linear_search(container, element) -> int:
    print("Begin linear search for " + element)
    for i in range(len(container)):
        if container[i] == element:
            return i

    return -1

def binary_search(container, element) -> int:
    print("Begin binary search for " + element)
    low = 0
    high = len(container) - 1

    while high >= low:
        mid = (high + low) // 2
        if container[mid] < element:
            low = mid + 1
        elif container[mid] > element:
            high = mid - 1
        else:
            return mid

    return -1

def main():
    time_stamp = time.time()
    result = linear_search(stringdata.get_data(), "not_here")
    print("Result:" + str(result))
    print("Time:" + str(time.time() - time_stamp))

    time_stamp = time.time()
    result = binary_search(stringdata.get_data(), "not_here")
    print("Result:" + str(result))
    print("Time:" + str(time.time() - time_stamp))

    time_stamp = time.time()
    result = linear_search(stringdata.get_data(), "mzzzz")
    print("Result:" + str(result))
    print("Time:" + str(time.time() - time_stamp))

    time_stamp = time.time()
    result = binary_search(stringdata.get_data(), "mzzzz")
    print("Result:" + str(result))
    print("Time:" + str(time.time() - time_stamp))

    time_stamp = time.time()
    result = linear_search(stringdata.get_data(), "aaaaa")
    print("Result:" + str(result))
    print("Time:" + str(time.time() - time_stamp))

    time_stamp = time.time()
    result = binary_search(stringdata.get_data(), "aaaaa")
    print("Result:" + str(result))
    print("Time:" + str(time.time() - time_stamp))

if __name__ == '__main__':
    main()
