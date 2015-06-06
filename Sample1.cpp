#include "Sample1.h"
#include <algorithm>
#include <string>

JNIEXPORT jstring JNICALL Java_Sample1_nativeReverse
  (JNIEnv *env, jclass clazz, jstring jstr)
{
    const char *buf = env->GetStringUTFChars(jstr, 0);
    std::string s = buf;
    env->ReleaseStringUTFChars(jstr, buf);
    std::reverse(s.begin(), s.end());
    return env->NewStringUTF(s.c_str());
}
