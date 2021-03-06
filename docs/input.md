# User Input Guide

## Spaces

**ABSOLUTELY NO SPACES SHOULD BE INCLUDED IN INPUT**

Accepted: 1+2(3*3)        // returns result of 19

Not Accepted: 1+2 (3*3)        // returns result of 3

## Numbers

Accepts Integers:

* 1
* -1
* +1
* etc

Accepts Decimals:

* .1
* -.1
* +0.001
* +.0000000000001
* etc

Accepts Scientific Notation:

* 1e-34
* -3.5e22
* 22.2e+3
* etc

Accepts Pi:

* pi
* Pi
* PI
* pI

Returns an output with up to 6 significant figures:
    0.111111, 0.1, 1, -12.3456, 0.00333333, 1.23456e-34, etc
	
Note that pi/2 = 1.57079632679, but when the calculator is given pi/2,
it outputs 1.5708, rounding 1.570796 up to 1.57080 and dropping the 0
	
## Parentheses

Parentheses are used to determine order of operations.

| Example | Output |
|---------|--------|
|2*(3+4)  |	    14 |
|2*3+4    |     10 |

## Mathematical Operators

| Operator Name | Operator Symbol | Example Expressions | Expected Output |
|---------------|-----------------|---------------------|-----------------|
|Add            |+                |  1+2                |     3           |
|               |                 |   1++2              |      3          |
|               |                 |   1+-2              |      -1         |
|Subtract       |-                |   2-1               |      1          |
|               |                 |    2-+1             |       1         |
|               |                 |    2--1             |       3         |	
|Multiply       | *               |    2*3              |       6         |
|               |                 |    2*-3             |       -6        |
|               |                 |    2*+3             |       6         |
|Divide         | /               |    6/2              |       3         |
|               |                 |    6/-2             |       -3        |
|               |                 |    6/+2             |       3         |
|               |                 |    6/0              |       inf       |
|Modulo         | %               |    6%5              |       1         |
|Power          | ^               |    5^2              |       25        |

## Functions

Functions are always followed by parentheses.

Accepted: sqrt(4), rad2deg(cos(pi)), etc

Not Accepted: sqrt4, sqrt(4, etc
	
|Function Name|  Function String |   Example Expressions  |  Expected Output     |
|-------------|------------------|------------------------|----------------------|
|Square Root  |   sqrt           |     sqrt(4)            |     2                |
|Natural Log  |   log            |     log(2)             |     0.693147         |
|Log(Base 10) |   log10          |     log10(100)         |     2                |
|Exponential  |   exp            |     exp(1)             |     2.71828          |
|             |                  |     exp(2)             |     7.38906          |
|Sine         |   sin            |     sin(pi)            |     1.22465e-16      |
||||Note that this should be zero, but due to precision, it is instead a very small number|
|Cosine       |   cos            |     cos(pi)            |     -1|
|Tangent      |   tan            |     tan(pi)            |     -1.22465e-16|
||||See Comment for Sine|
|Arcsine      |   asin           |     asin(0)            |     0|
|Arccosine    |   acos           |     acos(0)            |     1.5708|
|Arctangent   |   atan           |     atan(0)            |     0|
||||Trig functions use radians by default|
|Radians to Degrees |  rad2deg   |     rad2deg(2pi)       |     360|
||                               |     rad2deg(acos(0))   |     90|
|Degrees to Radians |  deg2rad   |     deg2rad(90)        |     1.5708|
||                               |     cos(deg2rad(180))  |     -1|

