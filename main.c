/*
* MIT License

* Copyright (c) 2020 Kutlay KIZIL

* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include <stdio.h>
int main(void)
{
  float fahr[121], step = 1.0, celsius=0.0;
  int i=0;
  while (celsius < 30.0)
  {
    fahr[i] = (celsius) * (9.0/5.0) + 32;
    printf("Celsius=%.1f Fahrenheit=%f\n",celsius, fahr[i]);
    celsius = celsius + step;
    i++;
  }
  while (celsius >= 30.0 && celsius <50.0)
  {
    fahr[i] = (celsius) * (9.0/5.0) + 32;
    printf("Celsius=%.1f Fahrenheit=%f\n",celsius, fahr[i]);
    celsius = celsius + (step/2);
    i++;
  }
  while (celsius >= 50.0 && celsius <= 100.0)
  {
    fahr[i] = (celsius) * (9.0/5.0) + 32;
    printf("Celsius=%.1f Fahrenheit=%f\n",celsius, fahr[i]);
    celsius = celsius + step;
    i++;
  } 
  return 0;
}