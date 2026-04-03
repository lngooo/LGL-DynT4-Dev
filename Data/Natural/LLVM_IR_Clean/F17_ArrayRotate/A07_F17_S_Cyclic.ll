define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %79
16:
  %17 = load i32, i32* %6
  %18 = load i32, i32* %5
  %19 = srem i32 %17, %18
  store i32 %19, i32* %6
  %20 = load i32, i32* %6
  %21 = icmp eq i32 %20, 0
  br i1 %21, label %22, label %23
22:
  br label %79
23:
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %26
26:
  %27 = load i32, i32* %7
  %28 = load i32, i32* %5
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %32, label %30
30:
  br label %77
32:
  %34 = load i32, i32* %8
  store i32 %34, i32* %9
  %36 = load i32*, i32** %4
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %10
  br label %41
41:
  %43 = load i32, i32* %9
  %44 = load i32, i32* %6
  %45 = sub nsw i32 %43, %44
  %46 = load i32, i32* %5
  %47 = add nsw i32 %45, %46
  %48 = load i32, i32* %5
  %49 = srem i32 %47, %48
  store i32 %49, i32* %11
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %11
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  store i32 %55, i32* %12
  %56 = load i32, i32* %10
  %57 = load i32*, i32** %4
  %58 = load i32, i32* %11
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  store i32 %56, i32* %60
  %61 = load i32, i32* %12
  store i32 %61, i32* %10
  %62 = load i32, i32* %11
  store i32 %62, i32* %9
  %63 = load i32, i32* %7
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %7
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = load i32, i32* %9
  %70 = icmp ne i32 %68, %69
  br i1 %70, label %41, label %71
71:
  br label %74
74:
  %75 = load i32, i32* %8
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %8
  br label %26
77:
  br label %79
79:
  ret void
}
