#include 
#include 
#include "JavaToC.h"
JNIEXPORT void JNICALL Java_JavaToC_helloC(JNIEnv *env, jobject javaobj) 
{
	printf("Hello World: From C");
	return;
}
