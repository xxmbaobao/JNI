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


    
     jint  Java_com_example_hellojni_HelloJni_myLog( JNIEnv* env,jobject thiz,jstring msg)
{

       char data[128];

       memset(data, 0, sizeof(data));

       char *c_msg = NULL;

       c_msg = (*env)->GetStringUTFChars(env, msg, 0);
       __android_log_print(ANDROID_LOG_INFO, "JNIMsg", "Get Param:  %s  From Java", c_msg);
      return 23;
     

}

   
        
