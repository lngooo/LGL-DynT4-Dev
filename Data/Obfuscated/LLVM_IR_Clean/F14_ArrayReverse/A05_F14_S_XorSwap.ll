define dso_local void @D(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  %9 = load i32, i32* %4
  %10 = sub nsw i32 %9, 1
  store i32 %10, i32* %6
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %6
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %18, label %15
15:
  br label %57
18:
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  %24 = load i32*, i32** %3
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i32, i32* %24, i64 %26
  %28 = load i32, i32* %27
  %29 = xor i32 %28, %23
  store i32 %29, i32* %27
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %5
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %6
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  %40 = xor i32 %39, %34
  store i32 %40, i32* %38
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %6
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %5
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  %50 = load i32, i32* %49
  %51 = xor i32 %50, %45
  store i32 %51, i32* %49
  br label %52
52:
  %53 = load i32, i32* %5
  %54 = add nsw i32 %53, 1
  store i32 %54, i32* %5
  %55 = load i32, i32* %6
  %56 = add nsw i32 %55, -1
  store i32 %56, i32* %6
  br label %11
57:
  ret void
}
