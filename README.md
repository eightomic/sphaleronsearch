# SphaleronSearch

[![SphaleronSearch](sphaleronsearch.jpg)](https://github.com/eightomic/sphaleronsearch)

## Table of Contents

- [Introduction](README.md?tab=readme-ov-file#introduction)
- [Author](README.md?tab=readme-ov-file#author)
- [License](README.md?tab=readme-ov-file#license)
- [Implementation](README.md?tab=readme-ov-file#implementation)

## Introduction

SphaleronSearch is the efficient substring search algorithm that has low-footprint implementation (efficient memory usage and small code size), no division/modulus/multiplication operators and ultra-fast speed.

## Author

SphaleronSearch was created by William Stafford Parsons as a product of [Eightomic](https://eightomic.com).

## License

SphaleronSearch is licensed with [BSD-3-Clause](LICENSE).

## Implementation

Each mention of SphaleronSearch refers to both of the following variants individually (`sphaleronsearch_first` and `sphaleronsearch_last`) implemented in C.

[sphaleronsearch.c](sphaleronsearch.c)

The `sphaleronsearch_first` function searches in a `haystack` array (of `haystack_length` elements) for the first occurrence (left-to-right) of a `needle` array (of `needle_length` elements).

When `needle` is found, `1` is returned and the index position of the first element in `needle` is assigned as the value pointed to by `position`. When `needle` isn't found, `0` is returned.

The integral type of each element in `haystack` must match the integral type of each element in `needle`.

`sphaleronsearch_last` isn't ready to publish yet.
