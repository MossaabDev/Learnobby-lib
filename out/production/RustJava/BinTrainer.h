/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class BinTrainer */

#ifndef _Included_BinTrainer
#define _Included_BinTrainer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     BinTrainer
 * Method:    learn
 * Signature: (ID[DLjava/lang/String;)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_BinTrainer_learn
  (JNIEnv *, jobject, jint, jdouble, jdoubleArray, jstring);

/*
 * Class:     BinTrainer
 * Method:    testinho
 * Signature: (I)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_BinTrainer_testinho
  (JNIEnv *, jobject, jint);

/*
 * Class:     BinTrainer
 * Method:    getStrings
 * Signature: ()Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_BinTrainer_getStrings
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
