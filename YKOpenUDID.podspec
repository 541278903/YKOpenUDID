

Pod::Spec.new do |s|
  s.name             = 'YKOpenUDID'
  s.version          = '1.0.0'
  s.summary          = 'A short description of YKOpenUDID.'

  s.description      = <<-DESC
        iOS统一获取DeviceId
                       DESC

  s.homepage         = 'https://gitee.com/Edwrard/YKOpenUDID'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'edward' => 'edwardyk@163.com' }
  s.source           = { :git => 'https://gitee.com/Edwrard/YKOpenUDID.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'

  s.source_files = 'YKOpenUDID/Classes/**/*'
end
