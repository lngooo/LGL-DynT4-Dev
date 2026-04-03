define dso_local void @fyv(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %12
12:
  %13 = load i32, i32* %7
  %14 = icmp ne i32 %13, 4
  br i1 %14, label %15, label %78
15:
  %16 = load i32, i32* %7
  switch i32 %16, label %77 [
    i32 0, label %17
    i32 1, label %25
    i32 2, label %37
  ]
17:
  %18 = load i32, i32* %5
  %19 = load i32, i32* %4
  %20 = sub nsw i32 %19, 1
  %21 = icmp slt i32 %18, %20
  br i1 %21, label %22, label %23
22:
  store i32 0, i32* %6
  store i32 1, i32* %7
  br label %24
23:
  store i32 4, i32* %7
  br label %24
24:
  br label %77
25:
  %26 = load i32, i32* %6
  %27 = load i32, i32* %4
  %28 = load i32, i32* %5
  %29 = sub nsw i32 %27, %28
  %30 = sub nsw i32 %29, 1
  %31 = icmp slt i32 %26, %30
  br i1 %31, label %32, label %33
32:
  store i32 2, i32* %7
  br label %36
33:
  %34 = load i32, i32* %5
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %5
  store i32 0, i32* %7
  br label %36
36:
  br label %77
37:
  %38 = load i32*, i32** %3
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %6
  %45 = add nsw i32 %44, 1
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %43, i64 %46
  %48 = load i32, i32* %47
  %49 = icmp sgt i32 %42, %48
  br i1 %49, label %50, label %74
50:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %6
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  store i32 %56, i32* %8
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %6
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %6
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %8
  %68 = load i32*, i32** %3
  %69 = load i32, i32* %6
  %70 = add nsw i32 %69, 1
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %68, i64 %71
  store i32 %67, i32* %72
  br label %74
74:
  %75 = load i32, i32* %6
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %6
  store i32 1, i32* %7
  br label %77
77:
  br label %12
78:
  ret void
}
