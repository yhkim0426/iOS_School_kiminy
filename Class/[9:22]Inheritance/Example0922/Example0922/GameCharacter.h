//
//  gameCharacter.h
//  Example0922
//
//  Created by jakouk on 2016. 9. 22..
//  Copyright © 2016년 jakouk. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * 게임 캐릭터 클래스의 기본적인 속성및 메소드를 가진 클래스
 * @discussion 기본적인 메소드와 속성이 필요
 * @author jakouk
 * version 0.1
 */

@interface GameCharacter : NSObject

/**
 * 누군가를 공격하는 물리 공격력
 * @param someone 공격할 대상
 * @author jakouk
 * @version 0.1
 */
- (id)physicalAttackTo:(GameCharacter *)someone;


- (id)damagedAs:(NSInteger)damage;

@end
