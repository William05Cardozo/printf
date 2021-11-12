# project printf 
## pressente by:

PROYECTO _PRINTF.

What is Printf?
	printf is a function of the <stdio.h> library of the C language and its main utility is to print data on the screen, be it Character, String, Integer and Decimal numbers.
Our _printf function emulates this same function.
It was created from structures, variadic functions, pointers and arrays. 
Applying learned themes and logic obtained along the process, in case of our parameter %d and %i, we use the same function since they share the same type of output, their difference is in the input.

Syntax:

	Printf("Parameters", VariableName)

Parameters:
	
	"%c": Print character.
	"%s": Print String.
	"%d": Print Integer.
	"%i": Print Interger.

Example:

/* #include <stdio.h>

int main (void)
{
	char string[] = "hello";
	
	_print("%s"; String)
	Return (0);
}

Result: "hello" */

/* #include <stdio.h>

int main (void)
{
	int a = 2;
	int b = 2;
	int sum = a+b;

	_printf(%d", sum);
	return (0);
}
	result: 4 */

made by:
	
	Kevin Ramirez - Twitter xARKEINx
	William Cardozo - Twitter W_anCardozo

<p style="margin-top:0pt; margin-left:63.34pt; margin-bottom:8pt; line-height:108%; font-size:28pt;"><span style="height:0pt; display:block; position:absolute; z-index:3;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-27.png" width="8" height="42" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:0;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-26.png" width="178" height="62" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:1;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-25.png" width="252" height="76" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:4;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-24.png" width="8" height="37" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:2;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-23.png" width="216" height="140" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:8;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-22.png" width="56" height="42" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:5;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-20.png" width="91" height="64" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:6;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-19.png" width="107" height="60" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:9;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-18.png" width="170" height="40" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:10;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-17.png" width="138" height="54" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:12;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-16.png" width="50" height="40" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:19;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-15.png" width="146" height="88" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:16;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-14.png" width="176" height="56" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:17;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-13.png" width="10" height="92" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:20;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-12.png" width="202" height="74" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:15;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-11.png" width="162" height="100" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:14;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-10.png" width="170" height="70" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:11;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-9.png" width="186" height="138" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:18;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-8.png" width="78" height="8" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:13;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-7.png" width="9" height="79" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:21;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-6.png" width="29" height="213" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:22;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-5.png" width="81" height="8" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:23;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-4.png" width="8" height="66" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:24;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-3.png" width="447" height="1" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:25;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-2.png" width="8" height="270" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><span style="height:0pt; display:block; position:absolute; z-index:26;"><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-1.png" width="8" height="43" alt="" style="margin: 0 0 0 auto; text-align: right; display: block; "></span><img src="https://myfiles.space/user_files/104518_a1018d2f078eab52/1636747558_diagrama-de-flujo/1636747558_diagrama-de-flujo-21.png" width="58" height="42" alt="" style="float: left; text-align: left; display: inline-block; "></p>
<div style="color: red;">Prueba Word to HTML - <a href="https://wordtohtml.net/site/payment">P&aacute;sate a PRO</a>.</div>
