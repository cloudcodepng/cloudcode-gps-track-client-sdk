// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "cloudcode_gps_track_client_sdk",
    platforms: [
        .iOS("15.0")
    ],
    products: [
        .library(
            name: "cloudcode-gps-track-client-sdk",
            targets: ["cloudcode_gps_track_client_sdk"]
        )
    ],
    dependencies: [
        .package(
            url: "https://github.com/cloudcodepng/cloudcode-gps-track-client-sdk.git",
            branch: "cloudcode/dev"
        )
    ],
    targets: [
        .target(
            name: "cloudcode_gps_track_client_sdk",
            dependencies: [
                .product(
                    name: "TraccarClientSDK",
                    package: "cloudcode-gps-track-client-sdk"
                )
            ],
            path: "Sources/cloudcode_gps_track_client_sdk",
            resources: [
                .process("PrivacyInfo.xcprivacy")
            ]
        )
    ]
)
