
Pod::Spec.new do |s|
  s.name             = 'LYFUIKit'
  s.version          = '1.1.0.Binary'
  s.summary          = 'A short description of LYFUIKit.'
  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/ios-liyufa/LYFUIKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liyufa' => 'li.yufa@starrides.com' }
  s.source           = { :git => 'https://github.com/ios-liyufa/LYFUIKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  if s.version.to_s.include?'Binary'
    puts '-------------------------------------------------------------------'
    puts 'Notice:LYFUIKit is binary now'
    puts '-------------------------------------------------------------------'
    s.prepare_command = '/bin/bash build_lib.sh'
    s.source_files = 'Pod/Products/include/**'
    s.ios.vendored_libraries = 'Pod/Products/lib/*.a'
    s.public_header_files = 'Pod/Products/include/*.h'
  else
    s.source_files = 'LYFUIKit/Classes/**/*'
  end
  
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

  
  # s.resource_bundles = {
  #   'LYFUIKit' => ['LYFUIKit/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
