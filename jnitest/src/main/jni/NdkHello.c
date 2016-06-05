#include "com_jni_NdkHello.h"

JNIEXPORT jstring JNICALL Java_com_jni_NdkHello_getHello
  (JNIEnv * env, jclass jcs){
       return (*env)->NewStringUTF(env, "from jni ...");
  }
