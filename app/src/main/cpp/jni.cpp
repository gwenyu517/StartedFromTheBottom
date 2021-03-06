#include <jni.h>
#include "quad.h"

extern "C" {

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_passAssetManager
        (JNIEnv *env, jclass cls, jobject java_asset_manager) {
    AAssetManager* assetManager = AAssetManager_fromJava(env, java_asset_manager);
    setAssetManger(assetManager);
}


JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_setBoundSize
        (JNIEnv *env, jclass cls, jint width, jint height) {
    setGridSize(width, height);
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_on_1surface_1created
        (JNIEnv *env, jclass cls) {
    on_surface_created();
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_on_1surface_1changed
        (JNIEnv *env, jclass cls, jint width, jint height) {
    on_surface_changed(width, height);
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_on_1draw_1frame
        (JNIEnv *env, jclass cls, jlong dt) {
    on_draw_frame(dt);
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_on_1destroy
        (JNIEnv *env, jclass cls) {
    cleanup();
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_addForce
        (JNIEnv *env, jclass cls, jfloat x0, jfloat y0, jfloat amountX, jfloat amountY, jfloat size) {
    addForce(x0, y0, amountX, amountY, size);
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_addDensity
        (JNIEnv *env, jclass cls, jfloat x, jfloat y, jfloat amount, jint mode, jfloat size) {
    addDensity(x, y, amount, mode, size);
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_addGravity
        (JNIEnv *env, jclass cls, jfloat gx, jfloat gy) {
    addGravity(gx, gy);
}

JNIEXPORT void JNICALL
Java_com_stableFluids_cafelatte_FluidLibJNIWrapper_clearQuad
        (JNIEnv *env, jclass cls) {
    resetSim();
}

}
