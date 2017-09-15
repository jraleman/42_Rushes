NAME
====

## libunit
I will *NEVER* deploy untested code

[![Build Status](https://travis-ci.org/jraleman/libunit.svg?branch=master)](https://travis-ci.org/jraleman/libunit)


DESCRIPTION
===========

Libunit is a C Programming Language Micro-framework dedicated to testing,
in order to test in every possible way your functions written in C.
The framework must be able executes a series of tests one after the other
without interruption, storing them in a list with a specific name which is
written to the standard output. Each test is executed in a separate process.
This process will be closed at the end of the test and it will give the hand
back to the parent process. It must be able to catch the result of the child
process or the type of interruption if it crashes (SegFault and/or BusError).


TRY IT!
=======

Tests with different results:

```shell
$ make
$ make -C tests/
$ ./tests/unit_test libunit.a
```

Successful tests:

```shell
$ make
$ make -C real-tests/
$ ./real-tests/unit_test libunit.a
```


RESULTS
=======

At the end of the tests execution, the name of the tested function is written,
and the name of each test with the corresponding result on the standard output,
following to the this syntax:

* OK   : Test succeeded.
* KO   : Test failed.
* SEGV : Segmentation Fault detected.
* BUSE : Bus Error detected.

The total number of tests and the count of succeeded tests are displayed.
In the case of a success, the routine exists returning zero (0).
If at least one of the tests fails, the routine returns minus one (-1).
Only the result of each test are written on the standard output.


SYNOPSIS
========

```C
#include "tests.h"
#include "libunit.h"
#include "test_functions.h"

int main(void)
{
	unittest_strlen_00_launcher();
	unittest_isalnum_00_launcher();
	unittest_itoa_00_launcher();
	unittest_strdup_00_launcher();
}
```

*results in:*

UNITTEST_STRLEN:
> Basic test : [OK]

1/1 tests are successful

-------------------------

UNITTEST_ISALNUM:
> Digit test : [KO]

0/1 tests are successful

-------------------------

UNITTEST_ITOA:
> Basic test : [SEGV]

0/1 tests are successful

-------------------------

UNITTEST_STRDUP:
> Basic test : [BUSE]

0/1 tests are successful

-------------------------
