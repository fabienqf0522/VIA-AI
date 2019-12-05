/* /////////////////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//                                 MIT License
//                            Copyright (c) 2019 VIA, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
// NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//
// ////////////////////////////////////////////////////////////////////////////////////////////// */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_viatech_glModel_ImageModel */

#ifndef _Included_com_viatech_glModel_ImageModel
#define _Included_com_viatech_glModel_ImageModel
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_viatech_glModel_ImageModel_jni_1create
        (JNIEnv *, jobject);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_init
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_glModel_ImageModel_jni_1init
        (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1release
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_initGL
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_glModel_ImageModel_jni_1initGL__JLjava_lang_String_2
        (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_initGL
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_glModel_ImageModel_jni_1initGL__JLjava_lang_String_2Ljava_lang_String_2
        (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_setMatrices
 * Signature: (J[F[F[F)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1setMatrices
        (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray, jfloatArray);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_draw
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1draw
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_setAlpha
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1setAlpha
        (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_setColor
 * Signature: (JFFF)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1setColor
        (JNIEnv *, jobject, jlong, jfloat, jfloat, jfloat);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_updateTextCoord
 * Signature: (JFFFF)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1updateTextCoord
        (JNIEnv *, jobject, jlong, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_viatech_glModel_ImageModel
 * Method:    jni_updateRefTexture
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_viatech_glModel_ImageModel_jni_1updateRefTexture
        (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif