Pod::Spec.new do |spec|

  spec.name         = "AccuraKYC-MRZ-Hybrid"
  spec.version      = "2.2.6"
  spec.summary      = "Accura KYC is used for Optical character recognition."
  spec.description  = "Accura Scan mobile technology provides you with the ability to effectively use the device camera and quickly onboard a customer. Seamless Customer On-Boarding by scanning a Passport or ID card with 3D selfie technology. Verify and Authenticate your customer remotely in realtime. It can work offline or can be stored on cloud or use it your way using our SDK / API’s."
  spec.homepage     = "https://github.com/accurascan/Cordova-KYC"
  spec.license      = "MIT"
  spec.author       = { "AccuraScan" => "connect@accurascan.com" }
  spec.platform     = :ios, "12.0"
  spec.static_framework = true
  spec.source       = { :git => "https://github.com/accurascan/AccuraKYC-MRZ-Hybrid.git", :tag => "2.2.6" }
  spec.preserve_paths = 'AccuraKYC.framework'
  spec.vendored_frameworks = 'AccuraKYC.framework'
  spec.requires_arc = true
  spec.swift_version = "5.0"
  spec.exclude_files = "AccuraKYCSDK/*/.{png}"
  spec.dependency 'AFNetworking', '~> 4.0'
  spec.dependency 'SVProgressHUD'
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end