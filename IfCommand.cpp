//
// Created by arye on 19/12/2019.
//

#include <iostream>
#include "IfCommand.h"
#include "Condition.h"

/**
 * Ctor.
 *
 * @param condition_arg
 * @param commands_pointers_arg
 * @param commands_strings_arg
 */
IfCommand::IfCommand(vector<string> condition_arg, vector<Command *>
commands_pointers_arg, vector<vector<string>> commands_strings_arg)
    : ConditionParser(condition_arg,
                      commands_pointers_arg,
                      commands_strings_arg) {
}

/**
 *
 *
 * @return
 */
double IfCommand::execute() {
  cout << "executing if command" << endl;
  Condition *cond = new Condition(this->condition_vector);
  if (cond->calculate() == 1) {
    ConditionParser::execute();
  }
  delete cond;
  return 0;
}
