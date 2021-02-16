//
//  TaxonSuggestionCell.h
//  iNaturalist
//
//  Created by Alex Shepard on 4/21/17.
//  Copyright © 2017 iNaturalist. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TaxonSuggestionCell : UITableViewCell

@property IBOutlet UIImageView *image;
@property IBOutlet UILabel *primaryName;
@property IBOutlet UILabel *secondaryName;
@property IBOutlet UILabel *comment;

@end
