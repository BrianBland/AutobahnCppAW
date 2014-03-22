###############################################################################
##
##  Copyright (C) 2014 Tavendo GmbH
##
##  Licensed under the Apache License, Version 2.0 (the "License");
##  you may not use this file except in compliance with the License.
##  You may obtain a copy of the License at
##
##      http:##www.apache.org#licenses#LICENSE-2.0
##
##  Unless required by applicable law or agreed to in writing, software
##  distributed under the License is distributed on an "AS IS" BASIS,
##  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
##  See the License for the specific language governing permissions and
##  limitations under the License.
##
###############################################################################

import os

env = Environment(ENV = os.environ)
env.Append(CPPPATH = ['#/include'])

Export('env')

autobahn = SConscript('src/SConscript', variant_dir = 'build/src', duplicate = 0)

Export('autobahn')

tests = SConscript('test/SConscript', variant_dir = 'build/test', duplicate = 0)