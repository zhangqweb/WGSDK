#
# Be sure to run `pod lib lint WGSDKJP.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WGSDKJP'
  s.version          = '0.0.11'
  s.summary          = 'games WGSDKJP.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/zhangqweb/WGSDKJP'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zhangqweb@126.com' => 'zhangqweb@126.com' }
  s.source           = { :git => 'https://github.com/zhangqweb/WGSDKJP.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.resources = "WGSDKJP/Assets/WGSDKResources.bundle"
  s.vendored_frameworks = 'WGSDKJP/Frameworks/WGSDK.xcframework'

#  s.vendored_frameworks = 'WGSDKJP/Frameworks/WGSDK.framework'
    
    s.source_files = 'WGSDKJP/Classes/**/*'
  
  s.xcconfig = {
  'VALID_ARCHS' =>  'armv7 arm64 x86_64',
  }
  
#  s.xcconfig = {
#  'VALID_ARCHS' =>  'armv7 arm64',
#  }
  
   

#  s.source_files = 'WGSDKJP/Classes/*.swift'
   
  s.frameworks = 'Foundation', 'UIKit'
  s.requires_arc = true
  
  s.swift_version = ['5.0', '5.1', '5.2' , '5.3']
  s.static_framework = true
   
   s.dependency 'SVProgressHUD'
   s.dependency 'Adjust', '~> 4.23.0'
   s.dependency 'RxSwift' ,'6.0.0-rc.1'
   s.dependency 'RxCocoa' ,'6.0.0-rc.1'
   s.dependency 'Moya'
   s.dependency 'Result'
   s.dependency 'HandyJSON','5.0.2'
   s.dependency 'Alamofire','5.2.2'
   s.dependency 'SnapKit','5.0.1'
   s.dependency 'TwitterKit5','5.2.0'
   s.dependency 'GoogleSignIn'
   s.dependency 'Firebase/Analytics'
   s.dependency 'Firebase/Auth'
   s.dependency 'Firebase/Messaging'
   s.dependency 'Firebase/Crashlytics'
   s.dependency 'FBSDKLoginKit'
   s.dependency 'FBSDKShareKit'
   s.dependency 'LineSDKSwift'
   s.dependency 'IQKeyboardManager'
   s.dependency 'ZLPhotoBrowser', '4.0.5'
end
