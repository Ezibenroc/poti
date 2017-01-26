/*
    This file is part of Poti

    Poti is free software: you can redistribute it and/or modify
    it under the terms of the GNU Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Poti is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Public License for more details.

    You should have received a copy of the GNU Public License
    along with Poti. If not, see <http://www.gnu.org/licenses/>.
*/
#include <poti.h>

int main (int argc, char **argv)
{
  poti_init ();
  poti_header ();
  poti_DefineContainerType ("PROCESS", "0", "PROCESS");
  poti_DefineLinkType("LINK", "0", "PROCESS", "PROCESS", "LINK");

  poti_CreateContainer (0, "p1", "PROCESS", "0", "p1");
  poti_CreateContainer (0, "p2", "PROCESS", "0", "p2");
  poti_CreateContainer (0, "p3", "PROCESS", "0", "p3");

  poti_StartLink (0.24, "0", "LINK", "p1", "c", "myKey-001");
  poti_EndLink (1.02, "0", "LINK", "p2",   "c", "myKey-001");


  poti_StartLink (1.04, "0", "LINK", "p1", "c", "myKey-002");
  poti_EndLink (2.10, "0", "LINK", "p3",   "c", "myKey-002");

  return 0;
}
