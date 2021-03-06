//
//  FeedCell.h
//  HalfCanvas
//
//  Created by Ryan Hittner on 1/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@class FeedCell;

@protocol FeedCellDelegate <NSObject>
@optional
- (void)handleMainImageClick:(int)indexNum;
- (void)handleAnswerclick:(int)indexNum;
- (void)handleAddAnswerClick:(int)indexNum;
- (void)handlePlayMovie:(NSURL*)movieURL;
- (void)handleToggleLike:(int)indexNum;
@required
- (void)addCurrentMovie:(MPMoviePlayerController*)player;
@end


@interface FeedCell : UITableViewCell
{
    MPMoviePlayerController *mplayer;
    id <FeedCellDelegate> delegate;
    int index;
}

@property (nonatomic, retain) NSString *movieURL;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIView *movieCanvas;
@property (nonatomic, retain) IBOutlet UIImageView *playButtonImage;
@property (nonatomic, retain) IBOutlet UIButton *playButton;
@property (nonatomic, retain) IBOutlet UIImageView *messageBubble;
@property (nonatomic, retain) IBOutlet UIProgressView *imageProgressIndicator;
@property (nonatomic, retain) IBOutlet UIButton *answerCount;
@property (nonatomic, retain) IBOutlet UIButton *otherButton;
@property (nonatomic, retain) IBOutlet UIButton *answerCountButton;
@property (nonatomic, retain) IBOutlet UILabel *answerCountLabel;
@property (nonatomic, retain) IBOutlet UIButton *createAnswerButton;
@property (nonatomic, retain) id <FeedCellDelegate> delegate;
@property (nonatomic) int index;
@property (nonatomic, retain) IBOutlet UILabel *likeCount;
@property (nonatomic, retain) IBOutlet UIImageView *heart;

-(IBAction)answerButtonClick:(id)sender;
-(void)initExtras;

-(IBAction)answerCountClick:(id)sender;
-(IBAction)playMovie:(id)sender;

@end
