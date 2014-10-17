/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <android/log.h>
#include <jni.h>


        class myMath
        {
             public:
              int myAdd(int x,int y){return x+y;}
        };
        extern "C"
        {
              jint  Java_com_example_hellojni_HelloJni_myAdd
                 ( JNIEnv* env,jobject thiz ,jint canshu,jstring msg)
             {

                   
			        myMath  test;
                  return test.myAdd(30,30)*canshu;
             }
			 
			
   
        }
