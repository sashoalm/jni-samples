#include "Sample1.h"

JNIEXPORT jint JNICALL Java_Sample1_nativeMultiply
  (JNIEnv *env, jclass clazz, jint a, jint b)
{
    jmethodID constructor = env->GetMethodID(clazz, "<init>", "(I)V");
    jobject object = env->NewObject(clazz, constructor, 7);
    jmethodID methodID = env->GetMethodID(clazz, "javaMultiply", "(II)I");
    return env->CallIntMethod(object, methodID, a, b);
}
