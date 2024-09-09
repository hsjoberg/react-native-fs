/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleCpp.js
 */

#include "RNReactNativeFsSpecJSI.h"

namespace facebook::react {

static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_getConstants(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->getConstants(
    rt
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_addListener(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->addListener(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_removeListeners(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->removeListeners(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asNumber()
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_appendFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->appendFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->copyFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_downloadFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->downloadFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_exists(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->exists(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_getFSInfo(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->getFSInfo(
    rt
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_hash(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->hash(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_mkdir(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->mkdir(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_moveFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->moveFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_pickFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->pickFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_read(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->read(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asNumber(),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asNumber()
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_readFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->readFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_readDir(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->readDir(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_stat(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->stat(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_stopDownload(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->stopDownload(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asNumber()
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_stopUpload(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->stopUpload(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asNumber()
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_touch(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->touch(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_unlink(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->unlink(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_uploadFiles(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->uploadFiles(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_write(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->write(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asNumber()
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_writeFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->writeFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asObject(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFileAssets(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->copyFileAssets(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFileRes(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->copyFileRes(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_existsAssets(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->existsAssets(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_existsRes(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->existsRes(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_getAllExternalFilesDirs(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->getAllExternalFilesDirs(
    rt
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_readFileAssets(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->readFileAssets(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_readFileRes(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->readFileRes(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_readDirAssets(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->readDirAssets(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_scanFile(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->scanFile(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_setReadable(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->setReadable(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asBool(),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asBool()
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_copyAssetsFileIOS(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->copyAssetsFileIOS(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt),
    count <= 2 ? throw jsi::JSError(rt, "Expected argument in position 2 to be passed") : args[2].asNumber(),
    count <= 3 ? throw jsi::JSError(rt, "Expected argument in position 3 to be passed") : args[3].asNumber(),
    count <= 4 ? throw jsi::JSError(rt, "Expected argument in position 4 to be passed") : args[4].asNumber(),
    count <= 5 ? throw jsi::JSError(rt, "Expected argument in position 5 to be passed") : args[5].asNumber(),
    count <= 6 ? throw jsi::JSError(rt, "Expected argument in position 6 to be passed") : args[6].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_copyAssetsVideoIOS(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->copyAssetsVideoIOS(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_completeHandlerIOS(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->completeHandlerIOS(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asNumber()
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_isResumable(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->isResumable(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asNumber()
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_pathForBundle(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->pathForBundle(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_pathForGroup(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->pathForGroup(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt)
  );
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_resumeDownload(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->resumeDownload(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asNumber()
  );
  return jsi::Value::undefined();
}
static jsi::Value __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFolder(jsi::Runtime &rt, TurboModule &turboModule, const jsi::Value* args, size_t count) {
  return static_cast<NativeReactNativeFsCxxSpecJSI *>(&turboModule)->copyFolder(
    rt,
    count <= 0 ? throw jsi::JSError(rt, "Expected argument in position 0 to be passed") : args[0].asString(rt),
    count <= 1 ? throw jsi::JSError(rt, "Expected argument in position 1 to be passed") : args[1].asString(rt)
  );
}

NativeReactNativeFsCxxSpecJSI::NativeReactNativeFsCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker)
  : TurboModule("ReactNativeFs", jsInvoker) {
  methodMap_["getConstants"] = MethodMetadata {0, __hostFunction_NativeReactNativeFsCxxSpecJSI_getConstants};
  methodMap_["addListener"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_addListener};
  methodMap_["removeListeners"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_removeListeners};
  methodMap_["appendFile"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_appendFile};
  methodMap_["copyFile"] = MethodMetadata {3, __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFile};
  methodMap_["downloadFile"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_downloadFile};
  methodMap_["exists"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_exists};
  methodMap_["getFSInfo"] = MethodMetadata {0, __hostFunction_NativeReactNativeFsCxxSpecJSI_getFSInfo};
  methodMap_["hash"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_hash};
  methodMap_["mkdir"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_mkdir};
  methodMap_["moveFile"] = MethodMetadata {3, __hostFunction_NativeReactNativeFsCxxSpecJSI_moveFile};
  methodMap_["pickFile"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_pickFile};
  methodMap_["read"] = MethodMetadata {3, __hostFunction_NativeReactNativeFsCxxSpecJSI_read};
  methodMap_["readFile"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_readFile};
  methodMap_["readDir"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_readDir};
  methodMap_["stat"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_stat};
  methodMap_["stopDownload"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_stopDownload};
  methodMap_["stopUpload"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_stopUpload};
  methodMap_["touch"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_touch};
  methodMap_["unlink"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_unlink};
  methodMap_["uploadFiles"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_uploadFiles};
  methodMap_["write"] = MethodMetadata {3, __hostFunction_NativeReactNativeFsCxxSpecJSI_write};
  methodMap_["writeFile"] = MethodMetadata {3, __hostFunction_NativeReactNativeFsCxxSpecJSI_writeFile};
  methodMap_["copyFileAssets"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFileAssets};
  methodMap_["copyFileRes"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFileRes};
  methodMap_["existsAssets"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_existsAssets};
  methodMap_["existsRes"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_existsRes};
  methodMap_["getAllExternalFilesDirs"] = MethodMetadata {0, __hostFunction_NativeReactNativeFsCxxSpecJSI_getAllExternalFilesDirs};
  methodMap_["readFileAssets"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_readFileAssets};
  methodMap_["readFileRes"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_readFileRes};
  methodMap_["readDirAssets"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_readDirAssets};
  methodMap_["scanFile"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_scanFile};
  methodMap_["setReadable"] = MethodMetadata {3, __hostFunction_NativeReactNativeFsCxxSpecJSI_setReadable};
  methodMap_["copyAssetsFileIOS"] = MethodMetadata {7, __hostFunction_NativeReactNativeFsCxxSpecJSI_copyAssetsFileIOS};
  methodMap_["copyAssetsVideoIOS"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_copyAssetsVideoIOS};
  methodMap_["completeHandlerIOS"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_completeHandlerIOS};
  methodMap_["isResumable"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_isResumable};
  methodMap_["pathForBundle"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_pathForBundle};
  methodMap_["pathForGroup"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_pathForGroup};
  methodMap_["resumeDownload"] = MethodMetadata {1, __hostFunction_NativeReactNativeFsCxxSpecJSI_resumeDownload};
  methodMap_["copyFolder"] = MethodMetadata {2, __hostFunction_NativeReactNativeFsCxxSpecJSI_copyFolder};
}


} // namespace facebook::react
