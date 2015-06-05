#include "Sample1.h"

JNIEXPORT jint JNICALL Java_Sample1_multiply
  (JNIEnv *, jclass, jint a, jint b)
{
    return a*b;
}
