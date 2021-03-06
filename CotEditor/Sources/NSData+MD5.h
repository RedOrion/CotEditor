/*
 =================================================
 NSData+MD5
 (for CotEditor)
 
 Copyright (C) 2014 CotEditor Project
 http://coteditor.github.io
 =================================================
 
 encoding="UTF-8"
 Created:2014-03-07
 
 ------------
 This category is from the following blog article by iOS Developer Tips.
 We would like to thank for sharing this helpful tip.
 http://iosdevelopertips.com/core-services/create-md5-hash-from-nsstring-nsdata-or-file.html
 Copyright iOSDeveloperTips.com All rights reserved.
 -------------------------------------------------
 
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 
 
 =================================================
 */

#import <Foundation/Foundation.h>

@interface NSData (MD5)

- (NSString *)MD5;

@end
