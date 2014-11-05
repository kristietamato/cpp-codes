//  doStuff.cpp

#include "doStuff.h"

#include<iostream>
#include<string>
using namespace std;

void doStuff(void)
{
    Span span1Type, span1Length;

    inputSpanType( span1Type );
}

void inputSpanType( Span span1Type )
{
    span1Type = getSpanType("Enter units of first span: ");
}

