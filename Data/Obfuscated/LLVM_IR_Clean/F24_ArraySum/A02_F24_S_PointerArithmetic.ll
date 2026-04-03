define dso_local i32 @HjL(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32*
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %9 = load i32*, i32** %3
  store i32* %9, i32** %6
  br label %10
10:
  %11 = load i32, i32* %4
  %12 = add nsw i32 %11, -1
  store i32 %12, i32* %4
  %13 = icmp ne i32 %11, 0
  br i1 %13, label %14, label %20
14:
  %15 = load i32*, i32** %6
  %16 = getelementptr inbounds i32, i32* %15, i32 1
  store i32* %16, i32** %6
  %17 = load i32, i32* %15
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, %17
  store i32 %19, i32* %5
  br label %10
20:
  %21 = load i32, i32* %5
  ret i32 %21
}
