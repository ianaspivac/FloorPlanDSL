#pragma once
#include "Token.h"
#include <map>

static bool isLetter(char ch) {
     return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch == '_';
}

static bool isDigit(char ch) {
     return ch >= '0' && ch <= '9';
}

static bool isAlpha(char ch) {
     return isLetter(ch) || isDigit(ch);
}

static bool isDataType(Token token) {
     return dataTypes.find(token.type) != dataTypes.end();
}

static bool isStructureName(Token token) {
     return structures.find(token.type) != structures.end();
}

template<typename K, typename V>
static bool hasKey(std::map<K, V> dict, K value) {
     return dict.find(value) != dict.end();
}