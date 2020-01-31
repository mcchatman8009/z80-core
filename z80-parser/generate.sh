#!/usr/bin/env bash

#alias antlr4='java -jar antlr4/antlr-4.8-complete.jar'
#alias grun='java org.antlr.v4.gui.TestRig'

mkdir -p generated
cp -f Z80.g4 generated

cd generated && java -jar ../antlr4/antlr-4.8-complete.jar -Dlanguage=Cpp Z80.g4

