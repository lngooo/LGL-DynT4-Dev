define dso_local i32 @iCVq3(i32* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %10 = load i32, i32* %5
  %11 = icmp sle i32 %10, 1
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %5
  store i32 %13, i32* %3
  br label %68
14:
  %16 = load i32*, i32** %4
  %17 = load i32, i32* %5
  %18 = sub nsw i32 %17, 1
  %19 = call i32 @iCVq3(i32* %16, i32 %18)
  store i32 %19, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %22
22:
  %23 = load i32, i32* %8
  %24 = load i32, i32* %6
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %27, label %26
26:
  store i32 2, i32* %9
  br label %45
27:
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %28, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %5
  %35 = sub nsw i32 %34, 1
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %33, i64 %36
  %38 = load i32, i32* %37
  %39 = icmp eq i32 %32, %38
  br i1 %39, label %40, label %41
40:
  store i32 1, i32* %7
  store i32 2, i32* %9
  br label %45
41:
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %22
45:
  br label %47
47:
  %48 = load i32, i32* %7
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %63, label %50
50:
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %5
  %53 = sub nsw i32 %52, 1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %51, i64 %54
  %56 = load i32, i32* %55
  %57 = load i32*, i32** %4
  %58 = load i32, i32* %6
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  store i32 %56, i32* %60
  %61 = load i32, i32* %6
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %3
  store i32 1, i32* %9
  br label %65
63:
  %64 = load i32, i32* %6
  store i32 %64, i32* %3
  store i32 1, i32* %9
  br label %65
65:
  br label %68
68:
  %69 = load i32, i32* %3
  ret i32 %69
}
