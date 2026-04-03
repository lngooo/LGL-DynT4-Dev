define dso_local void @ArrayRotate(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %10 = load i32, i32* %5
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  br label %63
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %6
  %16 = srem i32 %15, %14
  store i32 %16, i32* %6
  store i32 0, i32* %7
  br label %18
18:
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %6
  %22 = icmp sge i32 %20, %21
  br i1 %22, label %23, label %24
23:
  br label %61
24:
  %26 = load i32*, i32** %4
  %27 = getelementptr inbounds i32, i32* %26, i64 0
  %28 = load i32, i32* %27
  store i32 %28, i32* %8
  store i32 0, i32* %9
  br label %30
30:
  br label %31
31:
  %32 = load i32, i32* %9
  %33 = load i32, i32* %5
  %34 = sub nsw i32 %33, 1
  %35 = icmp sge i32 %32, %34
  br i1 %35, label %36, label %37
36:
  br label %50
37:
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %9
  %40 = add nsw i32 %39, 1
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %38, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %4
  %45 = load i32, i32* %9
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  store i32 %43, i32* %47
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %30
50:
  %51 = load i32, i32* %8
  %52 = load i32*, i32** %4
  %53 = load i32, i32* %5
  %54 = sub nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i32, i32* %52, i64 %55
  store i32 %51, i32* %56
  %57 = load i32, i32* %7
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %7
  br label %18
61:
  br label %63
63:
  ret void
}
