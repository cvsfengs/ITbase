#include <jni.h>
#include <string>
#include "bstree.h"
#include "btree.h"
#include <android/log.h>
#define TAG "JNITEST"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__)


extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_zzp_btree_1sort_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


extern "C"
JNIEXPORT void JNICALL
Java_com_example_zzp_btree_1sort_MainActivity_addKeys(JNIEnv *env, jobject instance) {

    // TODO
//    BSTree *bstree=new BSTree;
//
//    bstree->Insert("5");
//    bstree->Insert("3");
//    bstree->Insert("7");
//    bstree->Insert("2");
//    bstree->Insert("4");
//    bstree->Insert("6");
//    bstree->Insert("8");
//
//
//    bstree->printBSTree(1);
////    btree->printTree(btree->Root,1);
//    //平衡二叉树如下
//    // 第一层:     5
//    // 第二层:  3     7
//    // 第三层: 2 4   6 8
//
//    //题目要求结果
//    //第一层(从左到右):     5
//    //第二层(从右到左):  7     3
//    //第三层(从左到右): 2 4   6 8


    insert(10);
    insert(20);
    insert(5);
    insert(6);
    insert(12);
    insert(30);
    insert(7);
    insert(17);
    traverse(root);

}