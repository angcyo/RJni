#include <android/log.h>
#include "com_jni_NdkHello.h"

#define TAG "angcyo"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)

JNIEXPORT jstring JNICALL Java_com_jni_NdkHello_getHello
  (JNIEnv * env, jclass jcs){
       jstring hello = "log in jni, from c++. 2";
       LOGD("log in jni, from c++. NdkHello");
       return (*env)->NewStringUTF(env, "from jni ...");
  }
