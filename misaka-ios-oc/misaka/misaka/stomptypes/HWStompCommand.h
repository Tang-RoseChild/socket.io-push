//
//  HWStompCommand.h
//  huwai
//
//  Created by crazylhf on 15/4/17.
//  Copyright (c) 2015年 zq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HWGlobalMacros.h"

HWEXTERN_GLOBALSTRING(HWStompCmd_ABORT);
HWEXTERN_GLOBALSTRING(HWStompCmd_BEGIN);
HWEXTERN_GLOBALSTRING(HWStompCmd_ERROR);

HWEXTERN_GLOBALSTRING(HWStompCmd_SEND);
HWEXTERN_GLOBALSTRING(HWStompCmd_COMMIT);

HWEXTERN_GLOBALSTRING(HWStompCmd_MESSAGE);
HWEXTERN_GLOBALSTRING(HWStompCmd_RECEIPT);

HWEXTERN_GLOBALSTRING(HWStompCmd_CONNECT);
HWEXTERN_GLOBALSTRING(HWStompCmd_CONNECTED);
HWEXTERN_GLOBALSTRING(HWStompCmd_DISCONNECT);

HWEXTERN_GLOBALSTRING(HWStompCmd_SUBSCRIBE);
HWEXTERN_GLOBALSTRING(HWStompCmd_UNSUBSCRIBE);

#define IsHWStompCmdEqual(_cmd1_, _cmd2_) (_cmd1_ && _cmd2_ && [_cmd1_ isEqualToString:_cmd2_])
