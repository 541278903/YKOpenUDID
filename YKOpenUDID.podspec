

Pod::Spec.new do |s|
  s.name             = 'YKOpenUDID'
  s.version          = '1.1.1'
  s.summary          = 'iOS统一获取DeviceId'

  s.description      = <<-DESC
        iOS统一获取DeviceId
                       DESC

  s.homepage         = 'https://github.com/541278903/YKOpenUDID'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'edward' => 'edwardyk@163.com' }
  s.source           = { :git => 'https://github.com/541278903/YKOpenUDID.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'

  s.source_files = 'YKOpenUDID/Classes/**/*'
end
