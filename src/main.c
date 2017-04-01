/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年04月01日 09时48分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>
#include"../include/a.h"

int main(void)
{
	double b=25.0;
	double a=0.0;
	a=get_sqrt(b);
	printf("a is %lf, b is %lf\n",a,b);
	return 0;
}

