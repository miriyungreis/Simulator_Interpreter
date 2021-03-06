//
// Created by arye on 19/12/2019.
//

#include <iostream>
#include "WhileCommand.h"

/**
 * Ctor.
 * @param condition_arg
 * @param commands_pointers_arg
 * @param commands_strings_arg
 */
WhileCommand::WhileCommand(vector<string> condition_arg, vector<Command *>
commands_pointers_arg, vector<vector<string>> commands_strings_arg) :
    ConditionParser(condition_arg,
                    commands_pointers_arg,
                    commands_strings_arg) {
}

/**
 * execution with help of condition parser as composite pattern.
 * @return
 */
double WhileCommand::execute() {
  cout << "Executing while command..." << endl;
  Condition *cond = new Condition(this->condition_vector);
  while (cond->calculate() == 1) {
    ConditionParser::execute();
  }
  delete cond;
  return 0;
}
