#include "Sample1.h"

JNIEXPORT jint JNICALL Java_Sample1_nativeMultiply
  (JNIEnv *env, jobject object, jint a, jint b)
{
    jclass clazz = env->GetObjectClass(object);
    jmethodID methodID = env->GetMethodID(clazz, "javaMultiply", "(II)I");
    return env->CallIntMethod(object, methodID, a, b);
}
