//
// Copyright (C) 2013 Opensim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//
// author: Levente Meszaros (levy@omnetpp.org)
//

#ifndef __INET_TESTMOBILITY_H_
#define __INET_TESTMOBILITY_H_

#include "INETDefs.h"
#include "ILifecycle.h"

class INET_API TestMobility : public cSimpleModule, public ILifecycle {
  private:
    bool moving;
    cMessage stopMoving;
    cMessage startMoving;
    IDoneCallback * doneCallback;

  public:
    TestMobility() { }
    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback);
  protected:
    virtual void initialize(int stage);
    virtual void handleMessage(cMessage * message);
};

#endif
