#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_zw_co_flashtech_abiri_Abiri_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
