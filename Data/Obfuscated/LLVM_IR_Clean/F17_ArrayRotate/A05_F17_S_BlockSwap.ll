define dso_local void @KN(i32* %0, i32 %1, i32 %2, i32 %3) {
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 %3, i32* %8
  store i32 0, i32* %9
  br label %12
12:
  %13 = load i32, i32* %9
  %14 = load i32, i32* %8
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  br label %51
18:
  %20 = load i32*, i32** %5
  %21 = load i32, i32* %6
  %22 = load i32, i32* %9
  %23 = add nsw i32 %21, %22
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %20, i64 %24
  %26 = load i32, i32* %25
  store i32 %26, i32* %10
  %27 = load i32*, i32** %5
  %28 = load i32, i32* %7
  %29 = load i32, i32* %9
  %30 = add nsw i32 %28, %29
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %27, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %5
  %35 = load i32, i32* %6
  %36 = load i32, i32* %9
  %37 = add nsw i32 %35, %36
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %34, i64 %38
  store i32 %33, i32* %39
  %40 = load i32, i32* %10
  %41 = load i32*, i32** %5
  %42 = load i32, i32* %7
  %43 = load i32, i32* %9
  %44 = add nsw i32 %42, %43
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %41, i64 %45
  store i32 %40, i32* %46
  br label %48
48:
  %49 = load i32, i32* %9
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %9
  br label %12
51:
  ret void
}
define dso_local void @u2(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i32, i32* %5
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %13, label %9
9:
  %10 = load i32, i32* %5
  %11 = load i32, i32* %6
  %12 = icmp eq i32 %10, %11
  br i1 %12, label %13, label %14
13:
  br label %62
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %5
  %17 = sub nsw i32 %15, %16
  %18 = load i32, i32* %5
  %19 = icmp eq i32 %17, %18
  br i1 %19, label %20, label %26
20:
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %6
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %22, %23
  %25 = load i32, i32* %5
  call void @KN(i32* %21, i32 0, i32 %24, i32 %25)
  br label %62
26:
  %27 = load i32, i32* %5
  %28 = load i32, i32* %6
  %29 = load i32, i32* %5
  %30 = sub nsw i32 %28, %29
  %31 = icmp slt i32 %27, %30
  br i1 %31, label %32, label %43
32:
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %6
  %35 = load i32, i32* %5
  %36 = sub nsw i32 %34, %35
  %37 = load i32, i32* %5
  call void @KN(i32* %33, i32 0, i32 %36, i32 %37)
  %38 = load i32*, i32** %4
  %39 = load i32, i32* %5
  %40 = load i32, i32* %6
  %41 = load i32, i32* %5
  %42 = sub nsw i32 %40, %41
  call void @u2(i32* %38, i32 %39, i32 %42)
  br label %62
43:
  %44 = load i32*, i32** %4
  %45 = load i32, i32* %5
  %46 = load i32, i32* %6
  %47 = load i32, i32* %5
  %48 = sub nsw i32 %46, %47
  call void @KN(i32* %44, i32 0, i32 %45, i32 %48)
  %49 = load i32*, i32** %4
  %50 = load i32, i32* %6
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %5
  %54 = sext i32 %53 to i64
  %55 = sub i64 0, %54
  %56 = getelementptr inbounds i32, i32* %52, i64 %55
  %57 = load i32, i32* %5
  %58 = mul nsw i32 2, %57
  %59 = load i32, i32* %6
  %60 = sub nsw i32 %58, %59
  %61 = load i32, i32* %5
  call void @u2(i32* %56, i32 %60, i32 %61)
  br label %62
62:
  ret void
}
define dso_local void @i6(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i32, i32* %5
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %10
9:
  br label %16
10:
  %11 = load i32*, i32** %4
  %12 = load i32, i32* %6
  %13 = load i32, i32* %5
  %14 = srem i32 %12, %13
  %15 = load i32, i32* %5
  call void @u2(i32* %11, i32 %14, i32 %15)
  br label %16
16:
  ret void
}
