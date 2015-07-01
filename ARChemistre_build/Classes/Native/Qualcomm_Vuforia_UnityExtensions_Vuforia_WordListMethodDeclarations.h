#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordList
struct WordList_t737;
// System.String
struct String_t;
// Vuforia.DataSet/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSet_StorageType.h"
// Vuforia.QCARUnity/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_StorageTy.h"
// Vuforia.WordFilterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"

// System.Boolean Vuforia.WordList::LoadWordListFile(System.String)
// System.Boolean Vuforia.WordList::LoadWordListFile(System.String,Vuforia.DataSet/StorageType)
// System.Boolean Vuforia.WordList::LoadWordListFile(System.String,Vuforia.QCARUnity/StorageType)
// System.Int32 Vuforia.WordList::AddWordsFromFile(System.String)
// System.Int32 Vuforia.WordList::AddWordsFromFile(System.String,Vuforia.DataSet/StorageType)
// System.Int32 Vuforia.WordList::AddWordsFromFile(System.String,Vuforia.QCARUnity/StorageType)
// System.Boolean Vuforia.WordList::AddWord(System.String)
// System.Boolean Vuforia.WordList::RemoveWord(System.String)
// System.Boolean Vuforia.WordList::ContainsWord(System.String)
// System.Boolean Vuforia.WordList::UnloadAllLists()
// Vuforia.WordFilterMode Vuforia.WordList::GetFilterMode()
// System.Boolean Vuforia.WordList::SetFilterMode(Vuforia.WordFilterMode)
// System.Boolean Vuforia.WordList::LoadFilterListFile(System.String)
// System.Boolean Vuforia.WordList::LoadFilterListFile(System.String,Vuforia.DataSet/StorageType)
// System.Boolean Vuforia.WordList::LoadFilterListFile(System.String,Vuforia.QCARUnity/StorageType)
// System.Boolean Vuforia.WordList::AddWordToFilterList(System.String)
// System.Boolean Vuforia.WordList::RemoveWordFromFilterList(System.String)
// System.Boolean Vuforia.WordList::ClearFilterList()
// System.Int32 Vuforia.WordList::GetFilterListWordCount()
// System.String Vuforia.WordList::GetFilterListWord(System.Int32)
// System.Void Vuforia.WordList::.ctor()
extern "C" void WordList__ctor_m3478 (WordList_t737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
