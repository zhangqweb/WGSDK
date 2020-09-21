#
# Be sure to run `pod lib lint WGSDKJP.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WGSDKJP'
  s.version          = '0.0.1'
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

  s.resources = "ZQSDKTest/Assets/WGSDKResources.bundle"
  s.vendored_frameworks = 'ZQSDKTest/Frameworks/WGSDK.xcframework'
  
  s.xcconfig = {
  'VALID_ARCHS' =>  'armv7 arm64 x86_64',
  }

#  s.swift_version = '5.0'
   
  s.dependency 'SVProgressHUD'
  s.dependency 'Adjust', '~> 4.23.0'
  s.dependency 'RxSwift'
  s.dependency 'RxCocoa'
  s.dependency 'Moya'
  s.dependency 'Result'
  s.dependency 'HandyJSON'
  s.dependency 'Alamofire'
  s.dependency 'SnapKit'
  s.dependency 'TwitterKit5'
  s.dependency 'GoogleSignIn'
  s.dependency 'Firebase/Analytics'
  s.dependency 'Firebase/Auth'
  s.dependency 'FBSDKLoginKit','~> 7.1.1'
  s.dependency 'FBSDKShareKit','~> 7.1.1'
  s.dependency 'LineSDKSwift', '~> 5.7.0'
  s.dependency 'IQKeyboardManager'
  s.dependency 'ZLPhotoBrowser'
end
