#include "Sample1.h"

JNIEXPORT jint JNICALL Java_Sample1_nativeMultiply
  (JNIEnv *env, jclass clazz, jint a, jint b)
{
    jmethodID methodID = env->GetStaticMethodID(clazz, "javaMultiply", "(II)I");
    return env->CallStaticIntMethod(clazz, methodID, a, b);
}
